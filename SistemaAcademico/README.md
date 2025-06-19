# 🎓 Sistema de Controle Acadêmico

Bem-vindo ao **Sistema de Controle Acadêmico**, uma solução abrangente para gerenciar informações de alunos, disciplinas e professores em uma instituição de ensino! Este projeto é um exercício avançado de programação orientada a objetos em C++, com foco em **herança, polimorfismo, alocação dinâmica, manipulação de arquivos e recursos modernos da linguagem**.

---

## 🎯 Objetivo

Simular o funcionamento de um sistema de controle acadêmico: o sistema permite cadastrar, consultar, atualizar e organizar dados de alunos, disciplinas e professores, além de gerar relatórios e estatísticas relevantes, utilizando estrutura modular e conceitos sólidos de C++.

---



## 🛠️ Funcionalidades

### 📌 Cadastro
- [ ] Cadastrar alunos com matrícula, nome, curso e informações de contato.
- [ ] Cadastrar disciplinas com código, nome, carga horária e pré-requisitos.
- [ ] Cadastrar professores com identificador, nome, departamento e disciplinas lecionadas.

### 📌 Listagem
- [ ] Listar todos os alunos, disciplinas e professores cadastrados.
- [ ] Exibir informações detalhadas de cada entidade, com uso de polimorfismo (se aplicável).

### 📌 Busca e Consulta
- [ ] Buscar alunos por matrícula ou nome.
- [ ] Buscar disciplinas por código ou nome.
- [ ] Buscar professores por identificador ou nome.
- [ ] Consultar disciplinas de um professor e alunos matriculados em uma disciplina.

### 📌 Relatórios e Estatísticas
- [ ] Contar número total de alunos, disciplinas e professores.
- [ ] Calcular média de carga horária das disciplinas.
- [ ] Exibir número de alunos por curso.
- [ ] Usar membros `static` para manter contagens globais (se aplicável).

### 📌 Arquivos
- [ ] Salvar todos os dados em um arquivo `.txt` ao encerrar.
- [ ] Carregar automaticamente os dados salvos ao iniciar o programa.
- [ ] Detectar falhas na leitura e iniciar base limpa, se necessário.

---




## 🔧 Estrutura de Arquivos

```bash
SistemaAcademico/
├── include/
│   ├── Pessoa.hpp
│   ├── Aluno.hpp
│   ├── Professor.hpp
│   ├── Disciplina.hpp
│   ├── SistemaAcademico.hpp
│   └── Utilitarios.hpp
├── src/
│   ├── Pessoa.cpp
│   ├── Aluno.cpp
│   ├── Professor.cpp
│   ├── Disciplina.cpp
│   ├── SistemaAcademico.cpp
│   └── Utilitarios.cpp
├── main.cpp
├── dados_academicos.txt
└── Makefile
```

---




## 🧠 Conceitos Utilizados

- Herança e polimorfismo com `virtual` e `override` (para `Pessoa`, `Aluno`, `Professor`).
- Alocação dinâmica com `new` e `delete`.
- Vetores de ponteiros para objetos (ex: `Aluno** lista_alunos`).
- Leitura e gravação em arquivos com `fstream`.
- Menu interativo no terminal (`switch` + `do/while`).
- Geração de IDs automáticos (se aplicável).
- Organização modular em `.hpp` e `.cpp`.
- Uso de `enum class`, `const` e structs auxiliares.

---




## 🖥️ Exemplo de Menu

```text
===== SISTEMA ACADÊMICO =====
1. Cadastrar Aluno
2. Cadastrar Disciplina
3. Cadastrar Professor
4. Listar Alunos
5. Listar Disciplinas
6. Listar Professores
7. Buscar Aluno/Disciplina/Professor
8. Salvar dados e encerrar
Opção: _
```

---




## 🚧 Próximas Etapas

- [ ] Implementar a funcionalidade de matrícula de alunos em disciplinas.
- [ ] Adicionar a funcionalidade de atribuição de disciplinas a professores.
- [ ] Criar relatórios mais complexos, como histórico escolar de alunos.
- [ ] Refatorar buscas para serem case-insensitive.
- [ ] Melhorar validações de entrada e tratamento de erros.

---




## ✍️ Autor

Projeto desenvolvido por Manus AI.


