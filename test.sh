#!/bin/bash
shuf -i 1-200000 -n 50 > args.txt
./push_swap --bench --simple $(cat args.txt) 2> bench_simple.txt | ./checker $(cat args.txt)
./push_swap --bench --medium $(cat args.txt) 2> bench_medium.txt | ./checker $(cat args.txt)
./push_swap --bench --complex $(cat args.txt) 2> bench_complex.txt | ./checker $(cat args.txt)
./push_swap --bench --adaptive $(cat args.txt) 2> bench_adptive.txt | ./checker $(cat args.txt)
