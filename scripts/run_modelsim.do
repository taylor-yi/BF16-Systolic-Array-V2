# ModelSim / Questa. From the repo root: vsim -c -do scripts/run_modelsim.do
vlib work
vlog -sv -f scripts/files.f tb/tb_mini_tpu.sv tb/tb_units.sv

vsim -c tb_units -do "run -all"
vsim -c tb_mini_tpu +FILE=vectors/matmul_vectors.txt -do "run -all"
vsim -c tb_mini_tpu +FILE=vectors/mm_uniform5.txt -do "run -all"
vsim -c tb_mini_tpu +FILE=vectors/mm_wide.txt -do "run -all"
vsim -c tb_mini_tpu +FILE=vectors/mm_sparse.txt -do "run -all"
vsim -c tb_mini_tpu +FILE=vectors/mm_cancel.txt -do "run -all"
vsim -c tb_mini_tpu +FILE=vectors/mm_small.txt -do "run -all"
vsim -c tb_mini_tpu +FILE=vectors/mm_large.txt -do "run -all"
quit -f
