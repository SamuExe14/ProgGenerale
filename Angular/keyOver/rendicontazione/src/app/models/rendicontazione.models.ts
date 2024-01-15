export interface Utenti {
  idUtente: number
  nome: string
  cognome: string
  ruolo: Ruolo
  progetti: Progetti[]
  rendiconti: Rendiconti[]
}

export interface Ruolo {
  idRuolo: number
  nomeRuolo: string
}

export interface Progetti {
  idProgetto: number
  nomeProgetto: string
}

export interface Rendiconti {
  idRendiconto: number
  oreLavorate: number
  attività: string
  data: string
}
