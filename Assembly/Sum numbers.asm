.intel_syntax noprefix
.global _start

.section .text
_start:

    mov rax, 0      # sum
    mov rbx, 1      # current number

loop:
    cmp rbx, 10
    jg exit

    add rax, rbx
    inc rbx
    jmp loop

exit:
    mov rax, 60
    xor rdi, rdi
    syscall
