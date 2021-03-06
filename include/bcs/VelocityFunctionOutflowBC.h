#ifndef VELOCITYFUNCTIONOUTFLOWBC_H
#define VELOCITYFUNCTIONOUTFLOWBC_H

#include "IntegratedBC.h"

class VelocityFunctionOutflowBC;

template <>
InputParameters validParams<VelocityFunctionOutflowBC>();

class VelocityFunctionOutflowBC : public IntegratedBC
{
public:
  VelocityFunctionOutflowBC(const InputParameters & parameters);

protected:
  virtual Real computeQpResidual();
  virtual Real computeQpJacobian();

  const Function & _vel_x_func;
  const Function & _vel_y_func;
  const Function & _vel_z_func;
};

#endif // VELOCITYFUNCTIONOUTFLOWBC_H
