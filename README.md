# CIBENCH

Welcome to the world of CIBENCH!

Enjoy the collection of 12 benchmarks and their optimization methods, they are:

1. Bzip2-1.0.6
2. Backprop, 
3. Hotspot3D,
4. LavaMD,
5. Srad_v2 from Rodinia Benchmark Suite
6. FFT from GNU scientific library
7. msb(msgrate) from NERSC8 Trinity Benchmarks
8. USQCD Chroma
9. Hmmer, 
10. H264ref,
11. Povray from SPEC CPU2006 Benchmark Suite
12. Hoard 

## Installation:

Above benchmarks (besides GSL and Chroma) can be compiled individually in their folders, or you can compile them together by following commands:

Use "make org" to compile the original version

Use "make opt" to compile the optimized version

To install USQCD Chroma and GSL, please following the guidance inside corresponding folders.

Due to the copyright of SPEC Benchmark Suite, we will not release the code of Hmmer, H264ref and Povray here, please refer to our paper "What Every Scientific Programmer Should Know AboutCompiler Optimizations?" for the detailed optimization methods.

Here we list our running commands for your reference:

hmmer: ./hmmer nph3.hmm swiss41

h264ref: ./h264ref -d foreman_ref_encoder_baseline.cfg

povray: ./povray SPEC-benchmark-ref.ini


If you have insights or questions towards CIBENCH please send email to jtan02@email.wm.edu, thanks!

