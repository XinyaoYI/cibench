-C /home/qwang/working/witch/benchmarks/spec2006/benchspec/CPU2006/401.bzip2/run/run_base_ref_reuse.0005
-o input.source.out -e input.source.err run-spec-experiment.py "../run_base_ref_reuse.0005/bzip2_base.reuse input.source 280"
-o chicken.jpg.out -e chicken.jpg.err run-spec-experiment.py "../run_base_ref_reuse.0005/bzip2_base.reuse chicken.jpg 30"
-o liberty.jpg.out -e liberty.jpg.err run-spec-experiment.py "../run_base_ref_reuse.0005/bzip2_base.reuse liberty.jpg 30"
-o input.program.out -e input.program.err run-spec-experiment.py "../run_base_ref_reuse.0005/bzip2_base.reuse input.program 280"
-o text.html.out -e text.html.err run-spec-experiment.py "../run_base_ref_reuse.0005/bzip2_base.reuse text.html 280"
-o input.combined.out -e input.combined.err run-spec-experiment.py "../run_base_ref_reuse.0005/bzip2_base.reuse input.combined 200"
