# Sample_ES14_FCM_FIRMWARE

Nesse repositório, encontram-se duas versões do desenvolvimento de programação embarcada, que desenvolvi durante minha passagem na equipe de competição de carros de corrida FSAE, para o meu módulo frontal de controle eletrônico do carro.

A função desse módulo frontal é realizar a primeira interação dos comandos do piloto com o carro. Mais especificamente, ele trabalha com ênfase na complementação das atuações eletrônicas da ECU presente, integrando todas as demandas de powertrain e drivetrain do veículo de forma eficiente.

Foi utilizada a linha ST de componentes eletrônicos nesse projeto e, portanto, foi utilizada a IDE STM32CubeIDE e seus microcontroladores para a confecção deste projeto embarcado em C.

A versão disponível neste repositório é responsável por controlar a atuação eletropneumática do downshift do protótipo e pelo acompanhamento da marcha atual do mesmo por meio de protocolo de comunicação CAN com os módulos aquisitores dos sensores de rotação do motor e do eixo trativo. Foram usados periféricos como display de 7 segmentos e solenóides ligadas à linha de transmissão para a aplicação do módulo.

Há duas branches neste repositório que indicam dois métodos diferentes do mesmo projeto: uma utilizando interrupção externa e outra com input triggering. Ambas contêm tratamentos de debouncing e pull-ups para o pleno fluxo de comando e dados.

É isso. Qualquer dúvida, estou à disposição. Até mais!
