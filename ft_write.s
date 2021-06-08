			section	.text
			extern ___error
			global	_ft_write

_ft_write:								; fd = rdi, buffer = rsi, bytes = rdx
			mov		rax, 0x2000004
			syscall	
			jc exit						; if there is an error goto exit
			ret
exit:
			push 	rax
			call 	___error
			pop		QWORD[rax]	
			mov 	rax , -1
			ret
