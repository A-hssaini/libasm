			section	.text
			global	_ft_strcmp
_ft_strcmp:
		mov rax , 0				; i = 0
compare :
		mov dl , BYTE[rsi + rax]
		cmp	BYTE[rdi + rax], dl		; compare s1[i] with s2[i]
		jg	greater
		jl	lesser
		cmp dl, 0		; compare s2[i] with '\0'
		je	equal
		inc rax						; i++
		jmp compare
greater:
		mov rax, 1
		ret	
lesser:
		mov rax, -1
		ret
equal:
		mov rax, 0
		ret
