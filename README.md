# push_swap
5th of 42

/* USE CASES *\
Handle these type of inputs:
./push_swap 1 3 2 5
./push_swap "1 3 2 5"
./push_swap "1" "3" "2" "5"

Doesnt handle this type of input:
./push_swap "1 4" "555 2 222"

Empty case:
./push_swap → expt: prompted back
./push_swap "" OR ./push_swap "" "" OR ./push_swap "" "66 2"→ expt: error\n (standard error)

Error cases: expt: error\n (standard error
("   ") → null pointer
("3 4 5 7 1"  "  ") →null pointer
./push_swap 535 366387 8282 ma 99 → no digit
./push_swap "66363667277272772772" → expt: error\n (standard error - no integer)
./push_swap "0" "-0" → expt: error (standard error\n - same arguments)
./push_swap "0" "+0" → expt: error (standard error\n - same arguments)

1 input case:
./push_swap "6" → expt: prompted back

Already sort number cases:
./push_swap " 6 7" → expt: prompted back
./push_swap " 6    "   7 " → expt: prompted back
./push_swap "6" "7" → expt: prompted back
./push_swap "6 7" → expt: prompted back

Normal cases:
./push_swap "7 6 1" → expt: pa\npb\n
./push_swap "  7  6   "
./push_swap " " 7 1 2 → expt: should be works

100 numbers: (under than 700 operations)

500 numbers: (under than 5500 operations)


TEST LEAK EVERYWHERE WHERE THE PROGRAM CAN STOP BEFORE THE END

V nul_string
V is_sorted
V all_parsing

// convert 
strings_to_ll malloc() ft_create_elem_two()
// create new arg
mutiple string same -> malloc() ft_array_str_join()
// 
ft_array_atoi utils.c malloc()
