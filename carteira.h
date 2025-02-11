#ifndef CARTEIRA_H
#define CARTEIRA_H

#include <iostream>
#include <cstring>
using namespace std;
// Classe Carteira: representa a carteira de um usuário
class Carteira {
private:
    char endereco[50];
    float saldo_btc;
    float saldo_eth;
    float saldo_brl;
// Métodos da classe Carteira
public:
// Construtor da carteira: inicializa o endereço e os saldos de BTC, ETH e BRL
    Carteira(const char* _endereco, float btc, float eth, float brl);
    void exibir_saldo();
    void alterar_saldo(float btc, float eth, float brl);
    float getSaldoBTC();
    float getSaldoETH();
    float getSaldoBRL();
    char* getEndereco();
    void transacao(const char* tipo, float quantidade, float preco, bool is_eth, int transacao_num);
};

#endif
