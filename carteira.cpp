#include "carteira.h"
#include <cstring>

// Construtor da carteira: inicializa o endereço e os saldos de BTC, ETH e BRL
Carteira::Carteira(const char* _endereco, float btc, float eth, float brl) {
    strncpy(endereco, _endereco, 50);
    saldo_btc = btc;
    saldo_eth = eth;
    saldo_brl = brl;
}
 //  procedimento para exibir os saldos da carteira
void Carteira::exibir_saldo() {
    cout << "Carteira (" << endereco << ")\n";
    cout << "BTC: " << saldo_btc << "\nETH: " << saldo_eth << "\nBRL: " << saldo_brl << "\n";
}
    // procedimento para alterar os saldos da carteira
void Carteira::alterar_saldo(float btc, float eth, float brl) {
    saldo_btc += btc;
    saldo_eth += eth;
    saldo_brl += brl;
}
// funções para retornar os saldos da carteira
float Carteira::getSaldoBTC() { return saldo_btc; }
float Carteira::getSaldoETH() { return saldo_eth; }
float Carteira::getSaldoBRL() { return saldo_brl; }
char* Carteira::getEndereco() { return endereco; }
// procedimento para realizar transações de compra e venda
void Carteira::transacao(const char* tipo, float quantidade, float preco, bool is_eth, int transacao_num) {
    float total = quantidade * preco;
    // Verifica se a transação é de compra ou venda
    cout << "\n=== Realizando Transações ===\n";
    cout << "Transação " << transacao_num << ": " << tipo << " de " << quantidade << " " << (is_eth ? "ETH" : "BTC") << "\n";
    // Verifica se há saldo suficiente para a transação
    if (strcmp(tipo, "COMPRA") == 0) {
        if (saldo_brl >= total) {
            saldo_brl -= total;
            if (is_eth) saldo_eth += quantidade;
            else saldo_btc += quantidade;
            cout << "Transação realizada com sucesso!\n";
        } else {
            cout << "Saldo insuficiente para a compra!\n";
        }
    } else if (strcmp(tipo, "VENDA") == 0) {
        if ((!is_eth && saldo_btc >= quantidade) || (is_eth && saldo_eth >= quantidade)) {
            if (is_eth) saldo_eth -= quantidade;
            else saldo_btc -= quantidade;
            saldo_brl += total;
            cout << "Transação realizada com sucesso!\n";
        } else {
            cout << "Saldo insuficiente para a venda!\n";
        }
    }
}
