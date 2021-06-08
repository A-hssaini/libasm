section	.text
			extern ___error
			global	_ft_read

_ft_read:								; fd = rdi, buffer = rsi, bytes = rdx
			mov		rax, 0x2000003
			syscall		
			jc		exit				
			ret
exit:
			push	rax ; save errno value
			call	___error ; rax points to external variable errno.
			pop		QWORD[rax]
			mov		rax , -1
			ret
