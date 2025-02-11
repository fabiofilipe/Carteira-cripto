#include "transacao.h"
#include <cstring>
    // procedimento para realizar transações de compra e venda
void Transacao::realizar_transacao(Carteira &carteira, const char* tipo, float quantidade, float preco, bool is_eth, int transacao_num) {
    carteira.transacao(tipo, quantidade, preco, is_eth, transacao_num);
}
