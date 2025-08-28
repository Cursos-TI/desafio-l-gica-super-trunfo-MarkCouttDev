# 🌆 Super Trunfo de Cidades — Projeto em C

Projeto desenvolvido por **Marcos Augusto do Couto** como parte dos desafios de nível  **Mestre** na plataforma **SAVA**.


## 🎯 Objetivo

Criar um programa em linguagem C que simula cartas no estilo Super Trunfo, comparando cidades brasileiras por atributos como população, área, PIB, entre outros. Cada carta é uma representação de cidade, com indicadores calculados automaticamente.

---

## 🃏 Atributos por Carta

- Estado (`char`) — letra de A a H  
- Código da carta (`char[4]`) — ex: A01  
- Nome da cidade (`char[50]`)  
- População (`unsigned long int`)  
- Área (`float`) — km²  
- PIB (`float`) — bilhões de reais  
- Pontos turísticos (`int`)  
- Densidade populacional (`float`) — habitantes/km²  
- PIB per capita (`float`) — reais  
- Super Poder (`float`) — soma ponderada com inverso da densidade

---

## ⚙️ Funcionalidades

- Cadastro completo das duas cartas  
- Cálculo automático:
  - Densidade Populacional  
  - PIB per Capita  
  - Super Poder  
- Comparação entre atributos:
  - Atributos comuns: vence o maior valor  
  - Densidade Populacional: vence o menor valor  
- Exibição clara do resultado, mostrando qual carta venceu

---

## 🧪 Tecnologias Utilizadas

- Linguagem: C  
- Compilador: Dev-C++ / GCC  
- Estilo: sem estruturas de repetição ou decisão  
- Sistema operacional: Windows / Linux / macOS

---

## 🚀 Como Compilar e Executar

### Linux/macOS com GCC
```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo
