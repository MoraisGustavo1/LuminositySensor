# LuminositySensor

Projeto que utiliza um sensor LDR (Light Dependent Resistor) para controlar e indicar a taxa de luminosidade ambiente de uma vinheria.

## Descrição 

O projeto utiliza uma placa Arduino UNO R3 para ler e interpretar valores analógicos de ondas de luz captados através do sensor LDR. Esses valores são traduzidos em porcentagem e representam a intensidade da iluminação do ambiente. Conforme as taxas de iluminação detectadas aumentam ou diminuem, um grupo de LEDs é acionado, proporcionando um indicador visual em tempo real do nível de luminosidade do ambiente.

- Se a luminosidade estiver baixa, o LED verde acenderá.
- Se o nível de luminosidade for médio, o LED amarelo acenderá.
- Se a luminosidade estiver alta, o LED vermelho acende juntamente com um buzzer, indicando níveis de alerta.

## Componentes 

- Placa Arduino UNO R3
- Sensor LDR
- LEDS (verde, amarelo e vermelho)
- Buzzer
- Resistor de 10kΩ
- 13x Cabos Jumper
- 1x Protoboard (Placa de ensaio)

## Montagem
1. Para dar vida ao projeto, inicie posicionando os componentes na protoboard. A montagem é livre mas caso queira seguir nossa configuração aqui está: ![image](https://github.com/MoraisGustavo1/LuminositySensor/assets/148806879/7e2f0328-4af2-47a1-8f1c-58eccdae99a7)
2. Certifique-se que os LEDS estão conectados nas portas 11, 10 e 9, o buzzer na porta 13 e o sensor LDR de preferência, na porta A0.
3. Abra a Arduino IDE e insira o código, lembre se de revisar o código para garantir que não haja erros.
4. Conecte sua placa Arduino em uma das portas do seu computador/laptop e inicie o código.
5. Abra o monitor serial para visualizar as mudanças na taxa de iluminação.
6. Observe o comportamento dos LEDS e do buzzer conforme as mudanças ocorrem.

## Links 
- Simulação Tinkercad: [Clique Aqui!](https://www.tinkercad.com/things/fjZyaYzequ6-lightsensor)
- Video sobre o projeto: [Clique Aqui!](https://youtu.be/2QxhfdXdpoQ)

## Integrantes
- Estevam Melo RM555124
- Gustavo Morais RM554972
- Leonardo Novaes RM554807
- Miguel Carmo RM557622
