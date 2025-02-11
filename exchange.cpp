#include "exchange.h"
// procedimento para executar as transações
void Exchange::executar_transacoes() {
// Criação de três carteiras com saldos iniciais de BTC, ETH e BRL
    Carteira carteira1("0x123ABC", 1.5, 2.0, 5000.0);
    Carteira carteira2("0x456DEF", 0.5, 1.0, 2000.0);
    Carteira carteira3("0x789GHI", 0.0, 3.0, 1000.0);
// Exibe o estado inicial das carteiras
    cout << "=== Estado Inicial das Carteiras ===\n";
    carteira1.exibir_saldo();
    carteira2.exibir_saldo();
    carteira3.exibir_saldo();
    // Realiza as quatro transações pedidas de compra e venda
    Transacao::realizar_transacao(carteira1, "COMPRA", 0.5, 1000.0, false, 1);
    Transacao::realizar_transacao(carteira2, "VENDA", 1.0, 180.0, true, 2);
    Transacao::realizar_transacao(carteira3, "COMPRA", 10.0, 250.0, false, 3);
    Transacao::realizar_transacao(carteira2, "VENDA", 5.0, 220.0, false, 4);
    // Exibe o estado final das carteiras
    cout << "\n=== Estado Final das Carteiras ===\n";
    carteira1.exibir_saldo();
    carteira2.exibir_saldo();
    carteira3.exibir_saldo();
}
