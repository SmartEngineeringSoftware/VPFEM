#pragma once 

#include "../Log/Log.h"
#include "../Recorder/Recorder.h"
#include "../Model/Model.h"
#include "../Geometry/Geometry.h"

namespace Vpfem {
    class Application
    {
    private:
        std::unique_ptr<Model> m_Model;
        std::unique_ptr<Geometry> m_Geometry;
        //Geometry* m_Geometry;
    public:
        Application();
        virtual ~Application();

        void ModelBuilder(int, int);
        void Node(double,double);
        void PointLoad(int, double, double); // 2 DOF
        void PointLoad(int, double, double, double); // 3 DOF
        void PointLoad(int, double, double, double, double, double, double); // 6 DOF

        void ModelBuild();

        void Run();
    };
}