# Exercício 02: lista linear de nomes


<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
</a> 
</div>

<h6><a>Proposta do exercício</a></h6>
<p align="center">
<img src="imgs/proposta.png"/> 
</p>

<h6><a>Como executar</a></h6>
<p aligh="justify">
No arquivo há um arquivo nomes.txt nele está uma lista de 100 nomes dos quais o seu programa vai ler inserir em uma lista e trata-lós removendo os nomes repetidos.</p>

<p aligh="justify">
Caso queira alterar a lista de nomes basta adicionar nomes ou retirar lembrando que o programa lê um nome por linha e está fixado em 100 nomes, mas caso queria aumentar altere o MAXTAM da imagem abaixo.</p>
<p align="center">
<img src="imgs/exemplomaxtam.png"/> 
</p>

<p aligh="justify">
Se pretende mudar o arquivo texto que é lido, mude a linha 23 com o nome do novo arquivo texto que deseje.</p>
<p align="center">
<img src="imgs/nomes.png"/> 
</p>

# Compilação e Execução

O exercício 02 disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o g++, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação             

# Custo computanacional

Gerenciei os espaços em branco colocando um "\0" nos nomes repetidos e o custo computacional para novas inserções no pior caso seria de n.


# Contato

<div style="display: inline-block;">
<a href="https://t.me/caio_fer_dias">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> </div>

