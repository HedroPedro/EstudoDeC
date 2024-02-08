<ol> <li> It is time to do preliminary research based on the documentation. Refer to section 3.4.3 of the first volume to learn about register rflags. What is the meaning of flags CF, AF, ZF, OF, SF? What is the difference between OF and CF? </li> 

- CF: Carry Flag, acontece quando uma expressão aritmica carrega um carry ou pega do bit mais significante do resultado, essa flag apenas acontece em contas de números positivos, usado em conta de multipla precisão 
- AF: Auxiliary Flag, usada em contas de BDC (Binary-Decimal), gera um carry ou empresta o valor no bit 3
- ZF: Zero Flag, setada se o resultado der zero
- OF: Overflow Flag, setada se o resultado for um número positivo muito grande ou um número negativo muito pequeno
- SF: Significant Flag, setada como o sinal do resultado, 0 para número positivo e 1 para numeros negativos

OF serve para contas que utilizem tanto números positivos quanto para números negativos, enquanto que a CF apenas acontece para contas de números exclusivamente positivos
<li>What are the key principles of von Neumann architecture</li>
A arquitetura de Von Neumann tem como objetivo juntar a memória e o processador, temos assim o processador ligado com a memória por meio de um busão, assim teria como enviar dados para o CPU, essa que executaria instruções, e a ALU que iria computar o que fosse requisitado.

Era para ser robusto e barato de se construir

<li>What are registers?</li>

Registradores são pequenos blocos de memória que se localiza no processador

<li>What is the hardware stack?</li>

Hardware stack é uma pilha emulada no hardware que usa duas intruções (PUSH e POP) e o registrador rsp, esse que guarda o valor do topo da pilha

<li>What are the interrupts?</li>

Interrupções são desvio ocasionados por parte da instrução ocasionada pelo sistema ou por flags

<li>What are the main problems that the modern extensions of the von Neumann model are trying to solve?</li>
Existe cinco problemas que as novas tecnologias tentam resolver da arquitetura de Von Neumann

- Falta de interatividade
- Os programas não são isolados
- Os programas podem acessar todo o tipo de instrução
- Lentidão ao pegar dados
- Falta de salvação de contexto e isolamento de código

<li>What are the main general purpose registers of Intel 64?</li>

Esses registradores tem como objetivo guardar valores temporários utilizados pelos programas e algumas servem para auxliar o sistema

<li>What is the purpose of the stack pointer?</li>

O ponteiro da pilha serve para mostrar em qual endereço de memória se encontra o elemento no topo dela

<li>Can the stack be empty?</li>

Não, pois o rsp sempre vai subir

<li>Can we count elements in a stack?</li>

Considerando que o rsp sempre vai subir, nunca conseguimos saber quantos elementos tem a pilha
</ol>