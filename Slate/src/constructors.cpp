#include<primitive.h>
#include<classes.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		VIEW2D
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
view2D::view2D(vertex2D* a,int b){
		v=a;
		n=b;
	}

view2D::view2D(vertex2D* a,edge2D* b,int c,int d){
		v=a;
		e=b;
		n=c;
		s=d;
	}

view2D::view2D(vertex2D* a,edge2D* b,edge2D* c,int d,int f,int g){
		v=a;
		e=b;
		hidden_edge=c;
		n=d;
		s=f;
		h=g;
	}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		EDGE2D
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
edge2D::edge2D(vertex2D x,vertex2D y){
		a=&x;
		b=&y;
	};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		EDGE3D
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
edge3D::edge3D(vertex3D x,vertex3D y){
		a=&x;
		b=&y;
	};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Vertex3D
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
vertex3D::vertex3D(double a,double b,double c,string d){
		x=a;
		y=b;
		z=c;
		id=d;	
	};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Vertex2D
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
vertex2D::vertex2D(double a,double b,string c){
		x=a;
		y=b;		
		id=c;
	};
