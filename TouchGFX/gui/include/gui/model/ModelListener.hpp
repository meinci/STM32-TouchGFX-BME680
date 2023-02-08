#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include <touchgfx/hal/Types.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
    virtual void UpdateGraph1(uint16_t value){}
    virtual void UpdateBar(uint16_t value){}
    virtual void UpdateTextArea(uint16_t value){}

    virtual void UpdateTemp(float temperature){}
    virtual void UpdateHumi(float humidity){}
    virtual void UpdatePres(float pressure){}
    virtual void UpdateGas(float gas_resistance){}

protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
