# Maze-solving-algorithm-in-C
 
**pt_BR**

Dando um labirinto na forma de uma matriz retangular (M, N) binária, encontre o caminho mais curto no labirinto a partir de uma origem (xini, yini) até um dado destino (xfim, yfim), sendo que xini, yini, xfim, yfim são células da matriz MxN. O caminho deve ser construído com células que possuem valor 1. Para percorrer o labirinto, em qualquer momento, é possível mover um passo de cada vez em uma das quatro direções:

    ir para cima: (x, y) -> (x-1, y)
    ir para a esquerda: (x, y) -> (x, y-1)
    ir para baixo: (x, y) -> (x+1, y)
    ir para a direita: (x, y) -> (x, y+1)
Para encontrar o caminho mais curto no labirinto, todos os possíveis caminhos no labirinto da posição inicial até a final devem ser buscados. Inicia-se a busca a partir da origem na célula informada da matriz e explora-se todas as quatro direções possíveis, checando recursivamente se eles levam ao destino ou não. Atualiza-se o caminho mínimo se a célula destino é encontrada. Se um caminho não leva ao destino ou se todas as rotas já foram exploradas a partir da célula atual, volta-se um passo atrás. Para assegurar que o caminho é simples e não contém nenhum ciclo, registra-se o caminho das células envolvidas na matriz antes de explorar outra célula. Se a célula ja tiver sido visitada, ela é ignorada (não percorrida outra vez).

**en_US**

Giving a labyrinth in the form of a binary rectangular matrix (M, N), find the shortest path in the labyrinth from an origin (xini, yini) to a given destination (xfim, yfim), where xini, yini, xfim , yfim are cells of the MxN matrix. The path must be constructed with cells that have a value of 1. To traverse the maze at any time, it is possible to move one step at a time in one of the four directions:

    go up: (x, y) -> (x-1, y)
    go left: (x, y) -> (x, y-1)
    go down: (x, y) -> (x + 1, y)
    go right: (x, y) -> (x, y + 1)
    
To find the shortest path in the maze, all possible paths in the maze from the starting position to the end must be sought. The search starts from the origin in the informed cell of the matrix and explores all four possible directions, recursively checking whether they lead to the destination or not. The minimum path is updated if the target cell is found. If a path does not lead to the destination or if all routes have already been explored from the current cell, one step is taken back. To ensure that the path is simple and contains no cycles, the path of the cells involved in the matrix is ​​recorded before exploring another cell. If the cell has already been visited, it is ignored.
    
