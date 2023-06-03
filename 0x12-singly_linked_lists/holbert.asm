section .data
	format db "Hello, Holberton", 0

section .text
	extern printf

global main
main:
	sub rsp, 8     ; Align stack on 16-byte boundary

	; Call printf
	mov rdi, format
	xor eax, eax   ; Clear upper 32 bits of rax
	call printf

	; Clean up and exit
	add rsp, 8     ; Restore stack
	xor eax, eax   ; Return 0
	ret

