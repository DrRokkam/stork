#ifndef STORKPANDAAPP_H
#define STORKPANDAAPP_H

#include "MooseApp.h"

class StorkpandaApp;

template<>
InputParameters validParams<StorkpandaApp>();

class StorkpandaApp : public MooseApp
{
public:
  StorkpandaApp(InputParameters parameters);
  virtual ~StorkpandaApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* STORKPANDAAPP_H */
