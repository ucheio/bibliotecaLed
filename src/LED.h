#ifndef LED_h
#define LED_h

#include <Arduino.h>


/**
 * @class Led
 * @brief Classe para controle não bloqueante de um led.
 * Permite ligar, desligar, ligar por tempo determinado,
 * piscar continuamente e piscar por quantidade definida.
 * 
 * @note O método update() deve ser chamado continuamente dentro do loop().
 */
class Led
{
private:
    uint8_t pino;
    bool estado;
    bool desligarPorTempo;
    uint32_t desligarNoMomento;

    uint32_t tempoAnteriorPiscar;
    uint32_t tempoEspera;
    bool estadoPiscar;
    uint16_t repeticoes;

    /**
     * @brief Processa o desligamento temporizado
     */
     void funcaoPiscar();
    
    /**
     * @brief Processa o desligamento temporizado.
     */
     void funcaoDesligamento();


public:

    public:
    /**
     * @brief Constroi um objeto Led.
     * @param pin Número do pino digital onde o LED está conectado.
     */

    Led(uint8_t pin);

    /**
     * @brief Liga o LED continuamente.
     *  
     */
    void ligar();

    /**
     * @brief Liga o LED por um tempo determinado.
     * @param tempoLigado_ms Tempo, em milissegundos, que o LED ficará ligado.
     */
    void ligar(uint32_t tempoLigado_ms);


    /**
     * @brief Desliga o LED e cancaela os métodos automáticos
     */
    void desligar();

    /**
     * @brief Inicia a piscada contínua em 1 Hz.
     */
    void piscar();

    /**
     * @brief Inicia a piscada contínua em uma quantidade de Hz determinada.
     * @param frequencia Frequencia de piscada em Hz. 
     */
    void piscar(float frequencia);

    /**
     * @brief Pisca o LED uma quantidade definida de vezes
     * @param frequencia Frequencia da piscada em Hz.
     * @param repeticoes Quantidade de piscadas completas
     */
    void piscar(float frequencia, uint16_t repeticoes);

    /**
     * @brief Exibe o estado do LED atual.
     */
    bool getEstado();

    /**
     * @brief Mostra qual é o pino do LED.
     */
    uint8_t getPino();

    /**
     * @brief Define manualmente o estado do LED.
     * @param estado true para ligado, false para desligado.
     */
    void setEstado(bool estado);

    /**
     * @brief Troca o estado do LED.
     */
    void  alternar();

    /**
     * Registra as mudanças de estado.
     */
    void update();
  
};

#endif