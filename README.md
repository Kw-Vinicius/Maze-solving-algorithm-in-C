# Maze-solving-algorithm-in-C
 
**## Pt_BR**

Dando um labirinto na forma de uma matriz retangular (M, N) binária, encontre o caminho mais curto no labirinto a partir de uma origem (xini, yini) até um dado destino (xfim, yfim), sendo que xini, yini, xfim, yfim são células da matriz MxN. O caminho deve ser construído com células que possuem valor 1. Para percorrer o labirinto, em qualquer momento, é possível mover um passo de cada vez em uma das quatro direções:

    ir para cima: (x, y) -> (x-1, y)
    ir para a esquerda: (x, y) -> (x, y-1)
    ir para baixo: (x, y) -> (x+1, y)
    ir para a direita: (x, y) -> (x, y+1)
Para encontrar o caminho mais curto no labirinto, todos os possíveis caminhos no labirinto da posição inicial até a final devem ser buscados. Inicia-se a busca a partir da origem na célula informada da matriz e explora-se todas as quatro direções possíveis, checando recursivamente se eles levam ao destino ou não. Atualiza-se o caminho mínimo se a célula destino é encontrada. Se um caminho não leva ao destino ou se todas as rotas já foram exploradas a partir da célula atual, volta-se um passo atrás. Para assegurar que o caminho é simples e não contém nenhum ciclo, registra-se o caminho das células envolvidas na matriz antes de explorar outra célula. Se a célula ja tiver sido visitada, ela é ignorada (não percorrida outra vez).
