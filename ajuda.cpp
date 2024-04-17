#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> nomes = {"ADJAILSON FREIRE DE SÁ FILHO", "ARTHUR GUEDES FERREIRA", "ARTHUR SOARES HIGINO", "BIANCA MARÇAL PACIFICO", "EDUARDO COSTA DE SOUZA", "ELOY RIBEIRO PEREIRA MACIEL", "GABRIEL ALVES THEODORO", "GABRIEL GALLEGOS RIBEIRO", "GUSTAVO PIMENTA CORDEIRO", "GUSTAVO SARAIVA STARLING", "ISADELLIS LUÍSA DA PAIXÃO TEIXEIRA", "JOÃO GUIMARÃES MOREIRA", "LUCAS ANDRADE BRANDÃO", "LUIZ CARLOS DOS SANTOS JÚNIOR", "MARCOS TEIXEIRA GONCALVES ALMEIDA", "MATHEUS VINICIUS VIEIRA DIAS", "MILENA BUENO MACIEL", "NICOLAS RODRIGUES DE VARGAS", "PEDRO AUGUSTO DE PORTILHO RONZANI", "PEDRO TOLENTINO PIRES BRAGA", "PEDRO VITOR MELO BITENCOURT", "TIAGO MOREIRA HASTENREITER", "ULISSES ANDRADE CARVALHO", "VINICIUS BERNARDO CORTEZAO", "VINICIUS COSTA FERREIRA", "YAN PACHECO DE AQUINO"};
    vector<string> img = {"ADJAILSON_FREIRE_DE_SÁ_FILHO.jpg", "ARTHUR_GUEDES_FERREIRA.png", "ARTHUR_SOARES_HIGINO.jpg", "BIANCA_MARÇAL_PACIFICO.jpeg", "EDUARDO_COSTA_DE_SOUZA.jpg", "ELOY_RIBEIRO_PEREIRA_MACIEL.jpg", "GABRIEL_ALVES_THEODORO.png", "GABRIEL_GALLEGOS_RIBEIRO.jpeg", "GUSTAVO_PIMENTA_CORDEIRO.jpg", "GUSTAVO_SARAIVA_STARLING.png", "ISADELLIS_LUÍSA_DA_PAIXÃO_TEIXEIRA.jpg", "JOÃO_GUIMARÃES_MOREIRA.jpeg", "LUCAS_ANDRADE_BRANDÃO.jpg", "LUIZ_CARLOS_DOS_SANTOS_JÚNIOR.jpg", "MARCOS_TEIXEIRA_GONCALVES_ALMEIDA.jpg", "MATHEUS_VINICIUS_VIEIRA_DIAS.jpg", "MILENA_BUENO_MACIEL.jpg", "NICOLAS_RODRIGUES_DE_VARGAS.jpg", "PEDRO_AUGUSTO_DE_PORTILHO_RONZANI.jpg", "PEDRO_TOLENTINO_PIRES_BRAGA.jpg", "PEDRO_VITOR_MELO_BITENCOURT.jpeg", "TIAGO_MOREIRA_HASTENREITER.jpeg", "ULISSES_ANDRADE_CARVALHO.jpg", "VINICIUS_BERNARDO_CORTEZAO.png", "VINICIUS_COSTA_FERREIRA.jpg", "YAN_PACHECO_DE_AQUINO.png"};
    vector<string> github = {
        "https://github.com/Af-Oaks",
        "#!",
        "https://github.com/ArthurSHigino",
        "https://github.com/biapacifico",
        "https://github.com/edu15076",
        "https://github.com/El0y-C0SM0",
        "https://github.com/gabrieltheodoro1x",
        "https://github.com/galliegos",
        "https://github.com/gnobisP",
        "https://github.com/GustavoStarling",
        "https://github.com/Isadellis",
        "https://github.com/freshudo",
        "https://github.com/LucasAbrandao",
        "https://github.com/LuizJr2001",
        "https://github.com/marcostgaa",
        "#!",
        "https://github.com/MilenaBMaciel",
        "https://github.com/NicoRVargas",
        "https://github.com/PedroRonzani18",
        "https://github.com/ptpbraga",
        "https://github.com/pedromelobitencourt",
        "https://github.com/TiagoHast",
        "https://github.com/zulisses",
        "https://github.com/ViniCortezao",
        "https://github.com/Vinkin-git",
        "https://github.com/yannpacheco/yannpacheco"};
    vector<string> linkedin = {
        "https://www.linkedin.com/in/adjailson-freire-67b54a232/",
        "#!",
        "https://www.linkedin.com/in/arthur-higino-0859242a3/",
        "https://www.linkedin.com/in/biancapacifico/",
        "https://www.linkedin.com/in/eduardo-souza-956747262/",
        "#!",
        "https://www.linkedin.com/in/gabriel-alves-theodoro-825073304/",
        "https://www.linkedin.com/in/gabriel-gallegos-ribeiro/",
        "https://www.linkedin.com/in/gustavo-pimenta-71a552287/",
        "https://www.linkedin.com/in/gustavo-starling-261183304/",
        "https://www.linkedin.com/in/isadellis-paix%C3%A3o-184682226/",
        "https://www.linkedin.com/in/jo%C3%A3o-guimar%C3%A3es-moreira-99a318288/",
        "https://www.linkedin.com/in/lucasbrand%C3%A3o250525/",
        "www.linkedin.com/in/luizcarlos-dos-santos-júniorb5605b2a8",
        "https://www.linkedin.com/in/marcos-almeida-b39655304/",
        "#!",
        "https://www.linkedin.com/in/milena-bueno-a40468233/",
        "https://www.linkedin.com/in/nicolas-de-vargas-446435221/",
        "https://www.linkedin.com/in/pedro-augusto-de-portilho-ronzani-39739a261/",
        "https://br.linkedin.com/in/pedro-braga-594236304",
        "https://www.linkedin.com/in/pedro-melo-bitencourt-b2778b243/",
        "https://www.linkedin.com/in/tiago-hastenreiter-2aa064304/",
        "https://www.linkedin.com/in/ulisses-andrade-carvalho-804039236/",
        "#!",
        "https://www.linkedin.com/in/vinicius-costa-f-928072304?trk=contact-info",
        "https://br.linkedin.com/in/yan-pacheco-451b62196"};

    for (int i = 0; i < 26; i++) {
        cout << "<!-- " << nomes[i] << " -->\n"
             << "<div class=\"col-lg-4\">\n"
             << "<div class=\"team-member\">\n"
             << "<img class=\"mx-auto rounded-circle\" src=\"assets/img/team/" << img[i] << "\" alt=\"" << nomes[i] << "\">\n"
             << "<h4>" << nomes[i] << "</h4>\n";
        cout << "<a class=\"btn btn-dark btn-social mx-2\" href=\"" << github[i] << "\" aria-label=\"GitHub\"><i class=\"fab fa-github\"></i></a>\n";
        cout << "<a class=\"btn btn-dark btn-social mx-2\" href=\"" << linkedin[i] << "\" aria-label=\"LinkedIn\"><i class=\"fab fa-linkedin-in\"></i></a>\n";
        cout << "</div>\n"
             << "</div>\n"
             << endl;
    }

    return 0;
}
