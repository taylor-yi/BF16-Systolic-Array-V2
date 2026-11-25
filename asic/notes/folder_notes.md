# LibreLane Classic Flow: Step Reference

## Lint
01-verilator-lint: Runs Verilator over the RTL to catch syntax problems, width mismatches and other suspicious code before synthesis.
02-checker-linttimingconstructs: Fails the flow if the RTL contains simulation-only timing constructs like `#` delays that can't become hardware.
03-checker-linterrors: Fails the flow if the lint step reported any errors.
04-checker-lintwarnings: Counts lint warnings and reports them without stopping the flow.

## Synthesis
05-yosys-jsonheader: Has Yosys read the design and record its top-level ports and parameters in a JSON file for later steps.
06-yosys-synthesis: Converts the RTL into a gate-level netlist of sky130 standard cells and writes the cell and area report.
07-checker-yosysunmappedcells: Fails if any logic couldn't be mapped to a real standard cell.
08-checker-yosyssynthchecks: Checks the synthesis log for problems like combinational loops or undriven or multiply-driven nets.
09-checker-netlistassignstatements: Flags leftover `assign` statements in the netlist, which some downstream tools handle poorly.

## Floorplan
10-openroad-checksdcfiles: Checks for user timing constraint (SDC) files and falls back to a generic one if none are given.
11-openroad-checkmacroinstances: Confirms every macro listed in the config actually exists in the netlist.
12-openroad-staprepnr: Runs a first timing analysis on the synthesized netlist with ideal clocks and estimated wires.
13-openroad-floorplan: Sets the die and core size from the target utilization and creates the rows where cells will sit.
14-openroad-dumprcvalues: Records the resistance and capacitance per unit length of each metal layer for wire delay estimates.
15-odb-checkmacroantennaproperties: Checks that any macros carry the antenna information needed for later antenna checks.
16-odb-setpowerconnections: Connects every cell's power and ground pins to the VPWR and VGND nets.
17-odb-manualmacroplacement: Places macros at the fixed coordinates given in the config, if there are any.
18-openroad-cutrows: Removes standard-cell rows where macros or obstructions sit so cells can't be placed there.
19-openroad-tapendcapinsertion: Adds tap cells that tie the silicon wells to power and endcap cells at the ends of each row.
20-odb-addpdnobstructions: Temporarily blocks areas where the power grid shouldn't be built.
21-openroad-generatepdn: Builds the power distribution network, the metal straps and rails that carry power to every row.
22-odb-removepdnobstructions: Removes those temporary power-grid blockages.
23-odb-addroutingobstructions: Adds any user-defined areas that signal routing must avoid.

## Placement
24-openroad-globalplacementskipio: Does a rough placement of cells ignoring pins, so pins can then be placed near the logic they connect to.
25-openroad-ioplacement: Places the input and output pins around the die edge.
26-odb-customioplacement: Applies a user pin-order config, if one was given, to override automatic pin placement.
27-odb-applydeftemplate: Copies the die shape and pins from a template layout, if one was given.
28-openroad-globalplacement: Spreads all the cells across the core to minimize total wire length, allowing some overlap.
29-odb-writeverilogheader: Writes a Verilog stub of the design's ports, for use if this block becomes a macro elsewhere.
30-checker-powergridviolations: Checks that every cell is properly connected to the power grid.
31-openroad-stamidpnr: Runs timing analysis on the placed design using estimated wire lengths.
32-openroad-repairdesignpostgpl: Fixes electrical problems like long wires and overloaded nets by inserting buffers and resizing cells.
33-odb-manualglobalplacement: Moves specific cells to user-chosen coordinates, if any were given.
34-openroad-detailedplacement: Snaps every cell into a legal, non-overlapping spot on the rows.

## Clock tree
35-openroad-cts: Builds the clock tree, a network of buffers that delivers the clock to every flop with as little skew as possible.
36-openroad-stamidpnr-1: Re-runs timing now that the real clock tree exists, which is where hold problems usually first appear.
37-openroad-resizertimingpostcts: Fixes setup and hold violations by resizing cells and inserting buffers and delay cells.
38-openroad-stamidpnr-2: Re-runs timing to check what that repair achieved.

## Routing
39-openroad-globalrouting: Plans the approximate path and metal layers for every wire and estimates congestion.
40-openroad-checkantennas: Checks for antenna violations, long wires that could build up charge during manufacturing and damage transistors.
41-odb-diodesonports: Adds protection diodes on the design's pins, if enabled.
42-openroad-repairantennas: Fixes antenna violations by inserting diodes or rerouting wires through other metal layers.
43-openroad-stamidpnr-3: Re-runs timing using the global routes for more accurate wire delays.
44-openroad-detailedrouting: Draws every actual wire and via on the metal layers following the foundry's rules.
45-odb-removeroutingobstructions: Removes the temporary routing blockages added earlier.
46-openroad-checkantennas-1: Checks antennas again on the final detailed routes.
47-checker-trdrc: Fails if the router itself left design rule violations it couldn't fix.
48-odb-reportdisconnectedpins: Lists any cell pins that aren't connected to anything.
49-checker-disconnectedpins: Fails if any of those disconnected pins actually matter.
50-odb-reportwirelength: Reports total wire length and the longest individual wires.
51-checker-wirelength: Flags wires longer than a set threshold (skipped when no threshold is set).
52-openroad-fillinsertion: Fills empty gaps in the rows with filler and decap cells so the layout is continuous.

## Signoff
53-odb-cellfrequencytables: Counts how many of each cell type ended up in the final design.
54-openroad-rcx: Extracts the real resistance and capacitance of every routed wire into a parasitics (SPEF) file.
55-openroad-stapostpnr: Runs final signoff timing at every corner using the extracted parasitics, the numbers that actually count.
56-openroad-irdropreport: Estimates how much supply voltage drops across the power grid under load.
57-magic-streamout: Uses Magic to write the final layout as a GDSII file.
58-klayout-streamout: Uses KLayout to write a second, independent GDSII file.
59-klayout-render: Renders a picture of the final layout.
60-magic-writelef: Writes a LEF abstract, just the outline and pin locations, for using this block as a macro.
61-odb-checkdesignantennaproperties: Checks the block's antenna information so it can be safely used as a macro.
62-klayout-xor: Compares the Magic and KLayout GDS files shape by shape to catch export errors.
63-checker-xor: Fails if the two GDS files differ.
64-magic-drc: Runs Magic's design rule check on the final layout.
65-klayout-drc: Runs KLayout's design rule check as an independent second opinion.
66-checker-magicdrc: Fails if Magic found any DRC violations.
67-checker-klayoutdrc: Fails if KLayout found any DRC violations.
68-magic-spiceextraction: Extracts a transistor-level netlist from the actual layout geometry for LVS.
69-checker-illegaloverlap: Fails if any cells or shapes overlap in ways they shouldn't.
70-netgen-lvs: Compares the extracted layout netlist against the synthesized netlist to prove they're the same circuit.
71-checker-lvs: Fails if LVS found any mismatches.
72-checker-setupviolations: Reports any corners where setup timing fails.
73-checker-holdviolations: Reports any corners where hold timing fails.
74-checker-maxslewviolations: Reports nets whose signals rise or fall too slowly at any corner.
75-checker-maxcapviolations: Reports nets driving more capacitance than their driver is rated for.
76-misc-reportmanufacturability: Prints the final DRC, LVS and antenna summary.

## Other files
error.log: Every error the flow logged.
warning.log: Every warning the flow logged, the same list printed at the end of the run.
flow.log: The full log of the entire run.
resolved.json: The complete configuration actually used, with every default filled in.
final/: The finished outputs: GDS, LEF, netlists, SDF, SPEF, lib, and metrics.
tmp/: Scratch files used during the run.