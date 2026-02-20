#!/bin/bash
shuf -i 1-200000 -n 100 > args.txt
./push_swap --bench --simple $(cat args.txt) 2> bench_simple.txt | ./checker_linux $(cat args.txt)
./push_swap --bench --medium $(cat args.txt) 2> bench_medium.txt | ./checker_linux $(cat args.txt)
./push_swap --bench --complex $(cat args.txt) 2> bench_complex.txt | ./checker_linux $(cat args.txt)
./push_swap --bench --adaptive $(cat args.txt) 2> bench_adptive.txt | ./checker_linux $(cat args.txt)
