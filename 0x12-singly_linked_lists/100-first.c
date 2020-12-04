	extern printf
	global main

	section .text
main
	push rbp

	mov rdi, fmt 		;arg3, length of string
	mov rsi, msg 		;arg2, pointer to string
	mov rax, 0 		;arg1, write to screen
	call printf

	pop rbp

	mov rax,0
	ret
msg:
	db "Hello, Holberton", 0
fmt:
	db "%s", 10, 0