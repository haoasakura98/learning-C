# ⚠️ Important!!!
You can choose any of the challenges to develop. Feel free to start with the challenge that interests you the most.

# Naval Battle Challenge - Three Levels of Complexity

Welcome to the "Naval Battle" challenge! This project will challenge your programming skills using vectors and matrices to simulate a Naval Battle game, divided into three levels: Novice, Adventurer and Master. At each level, new features will be added, making the challenge progressively more complex.

## 🏅 Novice Level

In this initial level, you will implement the basic logic of ship positioning on a Naval Battle board using two-dimensional vectors.

### 🚩 Objectives:
- **Ship Positioning:** The system must simulate the location of two ships on the board, one positioned vertically and the other horizontally. - **Use of Vectors:** Ships will be positioned using two-dimensional vectors, with X and Y coordinates.
- **Display of Coordinates:** The system must display the coordinates of each part of the ships in the console using `printf`.

### 📥 Data Input:
- The values ​​will be entered manually through variables in the code.

### 📤 Data Output:
- After positioning, the system must display the coordinates of the ships in a clear and organized manner.

---
## 🏅 Adventurer Level

At the Adventurer level, you will expand the board and add more ships, including diagonal placements.

### 🆕 Difference from the Novice Level:
- **10x10 Board:** The board will be expanded to a 10x10 matrix.
- **Four Ship Positioning:** The system must position four ships, including two diagonally. - **Full Board Display:** The system will display the entire matrix, where 0 indicates a position without a ship and 3 indicates an occupied position.

### 🚩 New Features:
- **10x10 Matrix:** Implementation of a larger matrix to represent the board.
- **Diagonal Ship Positioning:** Addition of ships positioned diagonally.
- **Full Board Display:** The system will display the entire board, indicating the occupied and free positions.

---
## 🏅 Master Level

At the Master level, the challenge intensifies with the implementation of special skills represented by specific matrices on the board.

### 🆕 Difference in relation to the Adventurer Level:
- **Special Skills:** The system must define skill areas using matrices with specific patterns: cone, cross and octahedron. - **Nested Repetition Structures:** Use of nested loops to traverse and fill the areas affected by skills.

### 🚩 New Features:
- **Skill Matrices:** Implementation of three matrices to represent special skills on the board.
- **Skill Patterns:** Creation of specific patterns (cone, cross, octahedron) to define the affected areas.
- **Display of Affected Areas:** The system will display the board with the affected areas, using 0 for unaffected areas and 1 for affected areas.

### Output Example:

Example and command:
printf("%d ",matrix[i][j]);

### Example cone skill output:

0 0 1 0 0

0 1 1 1 0

1 1 1 1 1

### Example octahedron skill output:

0 0 1 0 0

0 1 1 1 0

0 0 1 0 0

### Example cross skill output:

0 0 1 0 0

1 1 1 1 1

0 0 1 0 0

---

## 📋 Common Functional Requirements
- **Data Entry:** Values ​​will be entered manually using variables in the code.
- **Use of Arrays:** Data should be structured efficiently using arrays.
- **Results Display:** Results should be displayed in a clear and organized manner.

## 📌 Common Non-Functional Requirements
- **Performance:** The system must perform operations efficiently, without noticeable delays.
- **Documentation:** The code must be well documented, with clear comments about the function of each part of the code.
- **Maintainability:** The code must be organized and easy to understand, facilitating future maintenance and expansions.

---

Good luck in developing this challenge! Take the opportunity to improve your skills in vectors and matrices as you progress through the levels.

Teaching Team - MateCheck

# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Batalha Naval - Três Níveis de Complexidade

Bem-vindo ao desafio "Batalha Naval"! Este projeto desafiará suas habilidades de programação utilizando vetores e matrizes para simular um jogo de Batalha Naval, dividido em três níveis: Novato, Aventureiro e Mestre. Em cada nível, novas funcionalidades serão adicionadas, tornando o desafio progressivamente mais complexo.

## 🏅 Nível Novato

Neste nível inicial, você implementará a lógica básica de posicionamento de navios em um tabuleiro de Batalha Naval utilizando vetores bidimensionais.

### 🚩 Objetivos:
- **Posicionamento dos Navios:** O sistema deve simular a localização de dois navios no tabuleiro, um posicionado verticalmente e outro horizontalmente.
- **Utilização de Vetores:** Os navios serão posicionados utilizando vetores bidimensionais, com coordenadas X e Y.
- **Exibição de Coordenadas:** O sistema deve exibir as coordenadas de cada parte dos navios no console utilizando `printf`.

### 📥 Entrada de Dados:
- Os valores serão inseridos manualmente por meio de variáveis no código.

### 📤 Saída de Dados:
- Após o posicionamento, o sistema deve exibir as coordenadas dos navios de forma clara e organizada.

---

## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o tabuleiro e adicionará mais navios, incluindo posicionamentos na diagonal.

### 🆕 Diferença em relação ao Nível Novato:
- **Tabuleiro 10x10:** O tabuleiro será expandido para uma matriz 10x10.
- **Posicionamento de Quatro Navios:** O sistema deverá posicionar quatro navios, incluindo dois na diagonal.
- **Exibição Completa do Tabuleiro:** O sistema exibirá toda a matriz, onde 0 indica uma posição sem navio e 3 indica uma posição ocupada.

### 🚩 Novas Funcionalidades:
- **Matriz 10x10:** Implementação de uma matriz maior para representar o tabuleiro.
- **Posicionamento de Navios na Diagonal:** Adição de navios posicionados diagonalmente.
- **Exibição do Tabuleiro Completo:** O sistema mostrará o tabuleiro completo, indicando as posições ocupadas e livres.

---

## 🏅 Nível Mestre

No nível Mestre, o desafio se intensifica com a implementação de habilidades especiais representadas por matrizes específicas no tabuleiro.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Habilidades Especiais:** O sistema deve definir áreas de habilidades utilizando matrizes com padrões específicos: cone, cruz e octaedro.
- **Estruturas de Repetição Aninhadas:** Utilização de loops aninhados para percorrer e preencher as áreas afetadas pelas habilidades.

### 🚩 Novas Funcionalidades:
- **Matrizes de Habilidades:** Implementação de três matrizes para representar habilidades especiais no tabuleiro.
- **Padrões de Habilidade:** Criação de padrões específicos (cone, cruz, octaedro) para definir as áreas afetadas.
- **Exibição das Áreas Atingidas:** O sistema exibirá o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas afetadas.

### Exemplo de Saída:

Exemplo e comando:
printf("%d ",matriz[i][j]);

### Exemplo de saída de habilidade em cone:

0 0 1 0 0

0 1 1 1 0

1 1 1 1 1

### Exemplo de saída de habilidade em octaedro:

0 0 1 0 0

0 1 1 1 0

0 0 1 0 0

### Exemplo de saída de habilidade em cruz:

0 0 1 0 0

1 1 1 1 1

0 0 1 0 0





---

## 📋 Requisitos Funcionais Comuns
- **Entrada de Dados:** Os valores serão inseridos manualmente por meio de variáveis no código.
- **Utilização de Matrizes:** Os dados devem ser estruturados de maneira eficiente utilizando matrizes.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara e organizada.

## 📌 Requisitos Não Funcionais Comuns
- **Performance:** O sistema deve executar operações de forma eficiente, sem atrasos perceptíveis.
- **Documentação:** O código deve ser bem documentado, com comentários claros sobre a função de cada parte do código.
- **Manutenibilidade:** O código deve ser organizado e fácil de entender, facilitando futuras manutenções e expansões.

---

Boa sorte no desenvolvimento deste desafio! Aproveite para aprimorar suas habilidades em vetores e matrizes enquanto progride pelos níveis.

Equipe de Ensino - MateCheck
