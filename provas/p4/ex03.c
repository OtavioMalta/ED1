/* 
ex03) Mostre como uma pilha pode ser usada para resolver a expressão 
matemática abaixo. Não confundir números negativos com subtrações.

Cada número e operador é lido em um passo. 
Para cada passo, mostre o estado da pilha 

Exemplo de como mostrar a pilha
2 2 <topo  // o número 2 está no topo
2 3 4 <topo // o número 4 está no topo

Expressão: 

1 -8 6 * + 9 -

1                   (TOPO: 1)
1 -8                (TOPO: -8)
1 -8 6              (TOPO: 6)
1 (-8 * 6)
1 -48               (TOPO: -48)
(1 + -48)
-47                 (TOPO: -47)
-47 9               (TOPO: 9)
(-47 - 9)// check:<<<erro:  9 - -47>>>>
-56                 (TOPO: -56)

Resultado: -56

/*

