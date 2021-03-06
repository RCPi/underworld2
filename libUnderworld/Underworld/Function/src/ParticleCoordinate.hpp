/*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*
**                                                                                  **
** This file forms part of the Underworld geophysics modelling application.         **
**                                                                                  **
** For full license and copyright information, please refer to the LICENSE.md file  **
** located at the project root, or contact the authors.                             **
**                                                                                  **
**~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*/

#ifndef __Underworld_Function_ParticleCoordinate_h__
#define __Underworld_Function_ParticleCoordinate_h__

#include "FunctionIO.hpp"
#include "DiscreteCoordinate.hpp"

class ParticleCoordinate: public DiscreteCoordinate
{
   public:
        ParticleCoordinate( void* particleCoordVariable );
        virtual       double* data();
        virtual const double* data()              const;
        virtual       double& at(std::size_t idx);
        virtual const double  at(std::size_t idx) const;
        virtual  ParticleCoordinate *clone() const { return new ParticleCoordinate(*this); }
    private:
        static unsigned _Check_GetDimSize(void* particleCoordVariable);
};

#endif // __Underworld_Function_ParticleCoordinate_h__
