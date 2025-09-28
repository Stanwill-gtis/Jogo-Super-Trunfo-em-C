# Cadastro de Cartas do Super Trunfo

## 📌 Descrição

Este programa em C permite o **cadastro de duas cartas do jogo Super Trunfo**.
Cada carta contém informações sobre uma cidade, como Estado, Código da Carta, Nome da Cidade, População, Área, PIB e Número de Pontos Turísticos.


---

## 🛠️ Funcionalidades

* Cadastro de **duas cartas** do Super Trunfo.
* Leitura de dados do usuário pela entrada padrão.
* Exibição organizada das informações cadastradas:

  * Estado
  * Código
  * Nome da Cidade
  * População
  * Área (em km²)
  * PIB (em bilhões de reais)
  * Número de Pontos Turísticos

---

## 📋 Estrutura do Código

* Declaração de variáveis para armazenar os dados de cada carta.
* Entrada dos dados do **usuário** com `scanf`.
* Impressão organizada dos dados cadastrados na tela.

---

## ▶️ Exemplo de Uso

### Entrada:

```
Cadastro da Carta 1:
Estado :
A
Codigo da carta (ex: A01):
A01
Nome da cidade:
São Paulo
Populacao:
12325000
Area (em km²):
1521.11
PIB (em bilhoes de reais):
699.28
Numero de pontos turisticos:
50

Cadastro da Carta 2:
Estado (A-Z):
B
Codigo da carta (ex: B02):
B02
Nome da cidade:
Rio de Janeiro
Populacao:
6748000
Area (em km²):
1200.25
PIB (em bilhoes de reais):
300.50
Numero de pontos turisticos:
30
```

### Saída:

```
Carta 1:
Estado: A
Codigo: A01
Nome da Cidade: São Paulo
Populacao: 12325000.000
Area: 1521.11 km²
PIB: 699.28 bilhoes de reais
Numero de Pontos Turisticos: 50

Carta 2:
Estado: B
Codigo: B02
Nome da Cidade: Rio de Janeiro
Populacao: 6748000.000
Area: 1200.25 km²
PIB: 300.50 bilhoes de reais
Numero de Pontos Turisticos: 30
```

---

## ⚙️ Requisitos

* Compilador C (como **GCC**).
* Sistema operacional compatível (Linux, Windows ou macOS).

---


## 📖 Observações

* O programa **não usa loops** ou **condições** — é uma sequência linear de instruções.
* A entrada deve ser feita de forma consistente, respeitando os tipos esperados (`int`, `float`, `string`).
* Use `.` como separador decimal ao inserir valores de área e PIB.

---

## 📜 Licença

Este projeto é de uso educacional e pode ser utilizado livremente para estudo e aprendizado em programação C.
