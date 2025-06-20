
# CONVENÇÃO DE ESTILO - LINGUAGEM [CTEC]

**VERSÃO**: 0.1.0  
**AUTOR**: Anildo Carneiro

---

## Instalação
 - **Windows**: Se você tem gcc ou clang basta rodar em win32/construa-ctec.bat
 - **Outros**: Provalvelmente funciona, mas eu não testei

---

## 1. REGRAS GERAIS DE ESTILO

- **Indentação**: 4 espaços (sem tabulações)  
- **Chaves**: estilo Allman (cada chave em sua própria linha)  
- **Comprimento máximo de linha**: 100 colunas  
- **Espaçamento**: utilize espaços ao redor de operadores, após vírgulas e entre palavras-chave e parênteses  
- **Comentários**:
  - Comentários de linha única devem começar com `//` e ser usados para explicações curtas  
  - Comentários de múltiplas linhas devem usar `/* */` e ser reservados para documentação mais elaborada  
  - Evite comentários redundantes; prefira nomes de variáveis e funções autoexplicativos

**Exemplo:**
```ctec
Se (condição) {
    // Verifica se a condição é verdadeira
    Retorno 0;
}
```

---

## 2. CONVENÇÕES DE NOMES

- **Funções**: usar verbos na terceira pessoa do singular em *camelCase*  
  Ex: `calculaTotal`, `enviaEmail`  
- **Classes e Estruturas**: usar substantivos em *PascalCase*  
  Ex: `Produto`, `CarrinhoDeCompras`  
- **Variáveis**: usar *camelCase*  
  Ex: `precoComDesconto`, `nomeUsuarioAtual`  
- **Constantes**: usar *UPPER_SNAKE_CASE*  
  Ex: `TAMANHO_MAXIMO`, `TEMPO_ESPERA_PADRAO`  
- **Coleções**: nomes devem estar no plural  
  Ex: `usuarios`, `produtosNoCarrinho`  
- **Enumerações**:
  - Nome da enumeração em *PascalCase*  
    Ex: `EstadoPedido`  
  - Valores em *UPPER_SNAKE_CASE*  
    Ex: `EM_PROCESSAMENTO`, `ENVIADO`, `ENTREGUE`

- **Parâmetros de função**: utilizar nomes claros e significativos  
- **Prefixos** (evite abreviações excessivas):
  - `ptr` para ponteiros  
    Ex: `ptrProduto`  
  - `num` para contadores  
    Ex: `numItens`

---

## 3. PALAVRAS-CHAVE

### Tipos Primitivos
- Inteiro  
- Real  
- Lógico  
- Caractere  
- Vazio  

### Modificadores de Tipo
- Bilateral  
- Curto  
- Duplo  
- Longo  
- Natural  

### Geradores de Tipo
- Tipo  

### Agrupadores de Tipo
- Enumeração  
- Estrutura  
- União  

### Modificadores e Qualificadores
- Constante  
- Volátil  

### Ligação de Tipos
- Estático  
- Externo  

### Controle de Fluxo
- Se  
- Senão  
- Itere  
- Enquanto  
- Faça  
- Troque  
- Caso  
- Pare  
- Continue  
- VáPara  
- Retorne  

### Utilitários
- TamanhoDe  
- TipoDe  
- AlinhamentoDe  
- Atributo  
- Montador  
- Etiqueta  

---

## 4. DIRETIVAS DE PRÉ-PROCESSADOR

- Devem ser precedidas por `#` e iniciadas com letra maiúscula  
- Não devem ser indentadas  
- Evitar o uso excessivo de diretivas condicionais; prefira modularização  

**Palavras reservadas:**
- `#Defina`  
- `#Inclua`  
- `#IncluaPróximo`  
- `#SeDefinido`  
- `#SeNãoDefinido`  
- `#SenãoSe`  
- `#Senão`  
- `#FimSe`  
- `#Definido`  
- `#Indefinido`  
- `#Erro`  
- `#Aviso`  
- `#Linha`  
- `#Diretiva`  

---

## 5. BOAS PRÁTICAS ADICIONAIS

- Cada função deve ter uma responsabilidade única e bem definida  
- Funções não devem exceder 50 linhas; em caso de necessidade, refatore  
- Variáveis devem ser declaradas o mais próximo possível de seu uso  
- Use `Constante` sempre que possível para evitar efeitos colaterais  
- Prefira nomes completos e descritivos a abreviações  
  (Ex: `quantidadeMaxima` em vez de `qtdMax`)  
- Utilize comentários estruturais para marcar seções:

```ctec
// ===========================
// Seção: Inicialização
// ===========================
```

---

## 6. EXEMPLO DE CÓDIGO PADRONIZADO

```ctec
Tipo Produto {
    Caractere nome [];
    Real preço;
}

Real calculaDesconto(Real preçoOriginal, Real taxa) {
    Se (taxa <= 0.0) {
        Retorno preçoOriginal;
    }

    Retorno preçoOriginal * (1.0 - taxa);
}

Inteiro Início() {
    Produto produto;
    Real desconto;

    produto.nome = "Teclado";
    produto.preço = 200.0;

    desconto = calculaDesconto(produto.preço, 0.15);

    // Exibir o valor com desconto (exemplo hipotético)
    escreva("Preço com desconto: ", desconto);

    Retorno 0;
}
```

---

**FIM DO DOCUMENTO**
