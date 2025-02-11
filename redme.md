# Sistema de Exchange de Criptomoedas (POO - C++)  

Este projeto desenvolve uma plataforma de venda e compra de criptomoedas, aplicando os princípios da Programação Orientada a Objetos (POO) na linguagem C++.

## 📖 **Visão Geral**  

Funcionalidades do do sistem criado :  
- Criação de carteira digital.  
- realização de transações como compra e venda de criptomoedas.  
- Gerenciamento de  carteiras e transações dinamicamente.  
- Exibir os saldos antes e depois das operações.  

## 📂 **Estrutura do Projeto**  

/20230156500_POO-20242-E001/ 

│── Carteira.h 
│── Carteira.cpp 
│── Transacao.h 
│── Transacao.cpp 
│── Exchange.h 
│── Exchange.cpp 
│── main.cpp 
│── Makefile 
│── README.md


## 🛠 **Compilação e Execução**  

Para compilar e executar o projeto, siga os passos abaixo:  

1. Compilado atraves do comando g++ e descrevendo os arquivos existentes, gerando o executavel "aplicativo.exe.

Como gerar: Comando-> g++  main.cpp carteira.cpp exchange.cpp transacao.cpp -o aplicativo.exe

2. OBS:
  Criado um makefile, onde para compilar os arquivos foi preciso instalar o Chocolatey no comando powershell do windows. 

  Comando para baixar o Chocolatey: "Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))"

  Logo após: verifico se foi instalado com: choco -- version

  E foi usado: choco install make para instalar o make e utiliza-lo no terminal

  Logo, basta colocar no terminal -> make 


## 🧠 **Melhorias Futuras** 

1. Salvar transações em um arquivo .txt
2. Interface gráfica 
3. API para preços reais das moedas 
4. cobrança de taxas por transação 
5. login e chaves de segurança


