	section	.text
			global	_ft_strlen
_ft_strlen:						
		mov rax , 0		 		; initialisation
		jmp compare
increment:
		inc rax 				; incrimentation
compare :
		cmp	BYTE[rdi + rax], 0	
		jne	increment			; if (str[i] != '\0') incrimenter rax
		ret					;