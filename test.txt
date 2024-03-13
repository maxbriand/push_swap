/* USE CASES *\
Normal case
classic integers: ./a.out 5566 23233 48

Tricky integers
+ integer: ./a.out +45 +32
- integer: ./a.out -89 65 -55

Inputs error
No-number inputs: 
	1) ./a.out 1 2 three 4
	2) ./a.out 1 2 "3 6 88" 4 -> space
	3) ./a.out 1 2 3 ++8
Integer overflow: ./a.out 45 484484551211518
Same inputs: ./a.out 45 654 877 654
