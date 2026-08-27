.intel_syntax noprefix
.global _start

.section .text
_start:

    mov rbx, 3
    mov rcx, 5
    mov rdx, 7
    mov r8,  9
    mov r9,  2

    mov rax, 7

    cmp rax, rbx
    je found

    cmp rax, rcx
    je found

    cmp rax, rdx
    je found

    cmp rax, r8
    je found

    cmp rax, r9
    je found

    # Not found
    mov rdi, 0
    jmp exit

found:
    mov rdi, 1

exit:
    mov rax, 60
    syscall
