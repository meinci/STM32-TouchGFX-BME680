/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoScreen2ScreenNoTransition();
    }

    // Screen1
    void gotoScreen1ScreenCoverTransitionWest();

    // Screen2
    void gotoScreen2ScreenNoTransition();

    void gotoScreen2ScreenCoverTransitionEast();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Screen1
    void gotoScreen1ScreenCoverTransitionWestImpl();

    // Screen2
    void gotoScreen2ScreenNoTransitionImpl();

    void gotoScreen2ScreenCoverTransitionEastImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
