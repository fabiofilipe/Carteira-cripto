#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <cstring>
#include "carteira.h"
// Classe Transacao para gerenciar transações entre carteiras
class Transacao {
public:// Método estático para realizar uma transação em uma carteira
    static void realizar_transacao(Carteira &carteira, const char* tipo, float quantidade, float preco, bool is_eth, int transacao_num);
};

#endif
