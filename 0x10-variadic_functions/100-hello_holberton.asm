section .text
	global main

main:

	mov	rdx,len
	mov	rcx,msg
	mov	rbx,1
	mov	rax,4
	int	0x80

	mov	rax,1
	int	0x80
section 	.data

msg 	db 'Hello, Holberton',0xa
len	equ $ - msg
