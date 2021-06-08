			section	.text
			extern	_malloc
			extern	_ft_strlen
			extern	_ft_strcpy
			global	_ft_strdup

; char *ft_strdup(const char *s)
_ft_strdup:						; rax ft_strfup(rdi)

	push rdi					; save rdi
	call _ft_strlen				; rax = strlen(rdi)
	mov rdi, rax				; rdi = rax;
	inc rdi						; rdi++
	call _malloc 				; rax = _malloc(rdi)
	pop rsi						; restore saved rdi
	mov rdi, rax 				
	call _ft_strcpy				; rax = strcpy(rdi, rsi)
	ret
