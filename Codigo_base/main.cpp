// Programa de teste incremental — PPO Projeto Final
//
// Instruções:
//   1. Implemente as classes pedidas nos seus próprios ficheiros .h / .cpp.
//   2. Vá activando cada passo (mude #if 0  para  #if 1) à medida que
//      tiver o código correspondente a compilar e a funcionar.
//   3. Adicione os novos .cpp ao CMakeLists.txt conforme indicado aí.
//
// Ordem sugerida: Passo 1 → 2 → 3 → 4 → 5 → 6

#include <iostream>
#include <vector>
#include <string>
#include <fstream>      // necessário a partir do Passo 5

// Descomente quando criar os ficheiros:
// #include "User.h"
// #include "Msg.h"

using namespace std;


int main() {

    // =========================================================
    // PASSO 1 — Classe User
    // Descomente o #include "User.h" no topo e o bloco abaixo
    // quando tiver a classe User implementada.
    // =========================================================
#if 0
    User u1("António", "aa@site.pt",  "+351 999888777");
    User u2("Maria",   "mm@mail.com", "+1 234432234");

    cout << u1 << "\n";
    cout << u2 << "\n";
    // Saída esperada (o formato exacto depende do seu operator<<):
    //   Utilizador: António, email: aa@site.pt, Movel: +351 999888777.
    //   Utilizador: Maria, email: mm@mail.com, Movel: +1 234432234.
#endif


    // =========================================================
    // PASSO 2 — Classes EmailMsg e MobileMsg
    // Descomente o #include "Msg.h" no topo e active este bloco
    // quando tiver as duas classes a compilar.
    // =========================================================
#if 0
    EmailMsg m1("aa@ua.pt", "bb@ua.pt", "Mensagem de teste 1");
    EmailMsg m2("cc@ua.pt", "bb@ua.pt", "Mensagem de teste 2");
    EmailMsg m3("ax@ua.pt", "dd@ua.pt", "Mensagem de teste 3");

    MobileMsg s1("912345678", "987654321", "SMS de teste 1");
    MobileMsg s2("911111111", "922222222", "SMS de teste 2");
    MobileMsg s3("933333333", "944444444", "SMS de teste 3");

    cout << "\n--- Emails ---\n";
    cout << m1 << "\n" << m2 << "\n" << m3 << "\n";
    // IDs esperados: #1, #2, #3

    cout << "\n--- SMS ---\n";
    cout << s1 << "\n" << s2 << "\n" << s3 << "\n";
    // IDs esperados: #1000, #1001, #1002
#endif


    // =========================================================
    // PASSO 3 — Polimorfismo: vector<Msg*>
    // Active quando o Passo 2 estiver a funcionar.
    //
    // ATENÇÃO: use sempre 'new' para criar os objectos — ficam
    // guardados no heap e o ponteiro mantém-se válido dentro do
    // vector. No final, liberta a memória com 'delete'.
    // =========================================================
#if 0
    vector<Msg*> mensagens;
    mensagens.push_back(new EmailMsg("aa@ua.pt",   "bb@ua.pt",   "Email na lista"));
    mensagens.push_back(new MobileMsg("912345678", "987654321",  "SMS na lista"));
    mensagens.push_back(new EmailMsg("cc@ua.pt",   "dd@ua.pt",   "Outro email"));
    mensagens.push_back(new MobileMsg("933333333", "944444444",  "Outro SMS"));

    cout << "\n--- Todas as mensagens (polimorfismo) ---\n";
    for (Msg* m : mensagens) {
        cout << *m << "\n";     // chama printMsg() do tipo correcto
    }

    // Verifique também getType():
    for (Msg* m : mensagens) {
        cout << "Tipo: " << m->getType() << "\n";
    }

    for (Msg* m : mensagens) delete m;
    mensagens.clear();
#endif


    // =========================================================
    // PASSO 4 — Menu interactivo e gestão de utilizadores/mensagens
    // (Parte B — introdução pelo teclado)
    // Active quando iniciar a Parte B.
    // =========================================================
#if 0
    vector<User>  utilizadores;
    vector<Msg*>  pendentes;    // mensagens ainda não enviadas
    vector<Msg*>  enviadas;     // mensagens já enviadas (Parte C)

    int opcao = -1;
    while (opcao != 0) {
        cout << "\n=== Menu ===\n"
             << "1. Adicionar utilizador (teclado)\n"
             << "2. Carregar utilizadores de ficheiro CSV\n"
             << "3. Listar utilizadores\n"
             << "4. Adicionar mensagem (teclado)\n"
             << "5. Carregar mensagens de ficheiro CSV\n"
             << "6. Listar mensagens pendentes\n"
             << "7. Enviar mensagens pendentes\n"   // activar no Passo 6
             << "8. Listar mensagens enviadas\n"    // activar no Passo 6
             << "0. Sair\n"
             << "Opcao: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            // TODO: ler nome, email, telefone e fazer push_back em 'utilizadores'

        } else if (opcao == 2) {
            // TODO: pedir nome do ficheiro e carregar utilizadores (Passo 5)

        } else if (opcao == 3) {
            for (const User& u : utilizadores)
                cout << u << "\n";

        } else if (opcao == 4) {
            // TODO: perguntar tipo (Email/SMS), ler campos e push_back em 'pendentes'
            // Lembre-se de usar 'new EmailMsg(...)' ou 'new MobileMsg(...)'

        } else if (opcao == 5) {
            // TODO: pedir nome do ficheiro e carregar mensagens (Passo 5)

        } else if (opcao == 6) {
            if (pendentes.empty())
                cout << "Nao ha mensagens pendentes.\n";
            for (Msg* m : pendentes)
                cout << *m << "\n";

        } else if (opcao == 7) {
            // TODO: enviar via sockets (Passo 6)

        } else if (opcao == 8) {
            if (enviadas.empty())
                cout << "Nenhuma mensagem enviada ainda.\n";
            for (Msg* m : enviadas)
                cout << *m << "\n";
        }
    }

    for (Msg* m : pendentes) delete m;
    for (Msg* m : enviadas)  delete m;
#endif


    // =========================================================
    // PASSO 5 — Leitura de ficheiros CSV
    // (Parte B — carregamento a partir de ficheiro)
    //
    // O formato dos ficheiros CSV (separador, colunas, como distinguir
    // EmailMsg de MobileMsg, ...) é uma decisão de projecto sua.
    // Defina o formato, documente-o e crie ficheiros de teste.
    // =========================================================
#if 0
    // Exemplo de esqueleto para leitura de utilizadores:
    //
    // ifstream f("users.csv");
    // string linha;
    // while (getline(f, linha)) {
    //     // partir 'linha' nos campos (use stringstream ou find/substr)
    //     // criar User e push_back em 'utilizadores'
    // }

    // Exemplo de esqueleto para leitura de mensagens:
    //
    // ifstream f("mensagens.csv");
    // string linha;
    // while (getline(f, linha)) {
    //     // 1.º campo indica o tipo ("email" ou "sms")
    //     // criar EmailMsg ou MobileMsg com 'new' e push_back em 'pendentes'
    // }
#endif


    // =========================================================
    // PASSO 6 — Envio via sockets e registo em log
    // (Parte C)
    //
    // Antes de activar este bloco:
    //   1. Adicione ao CMakeLists.txt (ver instruções lá dentro):
    //        ../Codigo\ Sockets\ II/Linux/NetworkSocket.cpp
    //   2. Inclua o header no topo deste ficheiro:
    //        #include "NetworkSocket.h"
    //   3. Corra o servidor numa janela separada:
    //        ./servidor   (compilado de 'Codigo Sockets II')
    // =========================================================
#if 0
    NetworkSocket cliente(0);   // porta 0 = SO escolhe uma porta livre
    if (!cliente.isValid()) {
        cerr << "Erro ao criar socket.\n";
        return 1;
    }
    if (!cliente.setRemoteAddress("127.0.0.1", 5000)) {
        cerr << "Erro ao definir endereco remoto.\n";
        return 1;
    }

    ofstream logFile("mensagens.log", ios::app);

    // Percorre 'pendentes' e envia cada mensagem uma única vez
    for (Msg* m : pendentes) {
        // TODO: converter *m para string (ou JSON)
        string texto = "...";   // substitua pela conversão real

        if (cliente.send(texto)) {
            cout << "Enviada: " << *m << "\n";
            logFile << texto << "\n";

            // TODO: mover m de 'pendentes' para 'enviadas'
            //       (ou marcar com um flag na própria mensagem)
        }
    }
#endif

    return 0;
}
