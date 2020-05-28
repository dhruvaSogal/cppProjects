//DHRUVA SOGAL GRAPH CREATOR
#include <iostream>
#include <vector>
#include <limits>
using namespace std;
struct edge;
struct vertex{
  char label;
  vector<edge*> edges;
  double tentitave;


};

struct edge{
  int weight;
  vertex* init;
  vertex* terminal;



};


void addVertex(vector<vertex*>*);
void addEdge(vector<vertex*>*);
void printAdjTable(vector<vertex*>*);
void delVertexUtil(vector<vertex*>* vertices);
void delVertex(vertex* n, vector<vertex*>* vertices);
void delEdge(vector<vertex*>*);
void print(vector<vertex*>*);
void dijkstraUtil(vertex* start, vertex* end,vector<vertex*>* vertices,  vector<vertex*>* visited,  vector<vertex*>* unvisited);
void dijkstra(vertex* start, vertex* end, vector<vertex*>* vertices, vertex* current, vector<vertex*>* visited,  vector<vertex*>* unvisited);
int main (){
  vector<vertex*>* vertices = new vector<vertex*>;
  vector<vertex*>* visited = new vector<vertex*>;
  vector<vertex*>* unvisited = new vector<vertex*>;
  char com;
  
  while (true){
    cout<<"Enter v to make a vertex, e for and edge, x to delete a vertex, c to delete an edge, p to print, and d to find shortest path"<<endl;
    cin>>com;
  if(com == 'v'){
    addVertex(vertices);

  }

  if(com == 'e'){
    addEdge(vertices);

  }
  if(com =='q'){
    break;
  }
  if(com == 'p'){
    print(vertices);

  }
  if(com == 'x'){
    delVertexUtil(vertices);
  }
  if(com == 'c'){
    delEdge(vertices);

  }
  if(com == 'd'){
    cout<<"Enter the starting node"<<endl;
    char s;
    cin>>s;
    vertex* k;
    for(int i = 0 ; i < vertices->size(); i++){
      if((*vertices)[i]->label == s){
	k = (*vertices)[i];
	cout<<"Enter ending vertex"<<endl;
	char t;
	cin>>t;
	for(int j = 0; j < vertices->size(); j++){
	  if((*vertices)[j]->label == t){
	    dijkstraUtil(k, (*vertices)[j], vertices, visited, unvisited);
	  }

	}
      }

    }
  }

  }

}
void addVertex(vector<vertex*>* vertices){
  vertex* temp = new vertex;
  char k;
  cout<<"Enter the character you wish to label this vertex with"<<endl;
  cin>>k;
  temp->label = k;
  vertices->push_back(temp);

      
  }


void addEdge(vector<vertex*>* vertices){
  edge* k = new edge;
  cout<<"enter the initial vertex"<<endl;
  char l;
  cin>>l;
  for(int i = 0; i < vertices->size(); i++){
    if((*vertices)[i]->label == l){
      vertex* temp = (*vertices)[i];
      cout<<"Enter terminal vertex"<<endl;
      char t;
      cin>>t;
      for(int j = 0; j < vertices->size(); j++){
	if((*vertices)[j]->label == t){
	  k->init = temp;
	  k->terminal = (*vertices)[j];
	  cout<<"enter edge weight"<<endl;
	  int w;
	  cin>>w;
	  k->weight = w;
	  k->init->edges.push_back(k);
	  

	  
	}
	else{
	  if(j == vertices->size()-1){
	    //cout<<"This vertex does not exist"<<endl;
	  }
	}


      }

    

    }
  
    








  }






  
}






void delVertexUtil(vector<vertex*>* vertices){
  cout<<"Enter the label of the vertex you wish to delete"<<endl;
  char g;
  cin>>g;
  for(int i = 0; i< vertices->size(); i++){
    if((*vertices)[i]->label == g){
      delVertex((*vertices)[i], vertices);
    }

  }



}

void delVertex(vertex* n, vector<vertex*>* vertices){ //deletes the vertex and all edges that are associated with it
  for(int i = 0; i < vertices->size(); i++){
    for(int j = 0; j < (*vertices)[i]->edges.size(); j++){
      if((*vertices)[i]->edges[j]->terminal == n){
	(*vertices)[i]->edges.erase((*vertices)[i]->edges.begin()+j); //delets all edges that end at it
      }
    }
    vertices->erase(vertices->begin() + i);
  }
  
  //delete n; //deletes the vertex, and all edges in its edges vector (edges that start at n)






}

void print(vector<vertex*>* vertices){
  //cout<<'p'<<endl;
 for(int i = 0; i< vertices->size(); i++){
   cout<<(*vertices)[i]->label<<": ";
   if((*vertices)[i]->edges.size() == 0){
     cout<<endl;
   }
   else{
     for(int j = 0; j < (*vertices)[i]->edges.size(); j++){
       cout<<(*vertices)[i]->edges[j]->terminal->label<<" ";
       if(j == (*vertices)[i]->edges.size()-1){
	 cout<<endl;
       }
       }
     }

   }
   



}
void delEdge(vector<vertex*>* vertices){
  cout<<"Enter the initial vertex of the edge you wish to delete"<<endl;
  char l;
  cin>>l;
  for(int i = 0; i < vertices->size(); i++){
    if((*vertices)[i]->label == l){
      cout<<"Enter the terminal vertex"<<endl;
      char t;
      cin>>t;
      for(int j = 0; j < (*vertices)[i]->edges.size(); j++){
	if((*vertices)[i]->edges[j]->terminal->label == t){
	  //cout<<'l'<<endl;
	  (*vertices)[i]->edges.erase((*vertices)[i]->edges.begin() + j);
	}
      }
    }
  }


}


void dijkstraUtil(vertex* start, vertex* end,vector<vertex*>* vertices,  vector<vertex*>* visited,  vector<vertex*>* unvisited){
  for(int i = 0; i < vertices->size(); i++){
    unvisited->push_back((*vertices)[i]);
    
    if((*vertices)[i] == start){
      (*vertices)[i]->tentitave = numeric_limits<double>::infinity();
    }
    else{
      (*vertices)[i]->tentitave = 0;
    }

  }
  dijkstra(start, end, vertices, start, visited, unvisited);

}

void dijkstra(vertex* start, vertex* end, vector<vertex*>* vertices, vertex* current, vector<vertex*>* visited,  vector<vertex*>* unvisited){
  for(int i = 0; i < current->edges.size(); i++){
    if(current->tentitave + current->edges[i]->weight < current->edges[i]->terminal->tentitave){
      current->edges[i]->terminal->tentitave = current->tentitave + current->edges[i]->weight;
    }
    for(int i = 0; i< unvisited->size(); i++){ //if tentative of last node + edge < tentative
      if((*unvisited)[i] == current){
	visited->push_back(current);           //move to visited from unvisted
	unvisited->erase(unvisited->begin() + i);
      }
    }
    for(int i = 0; i < visited->size(); i++){
      if((*visited)[i] == end){
	//terminate-> do nothing
	int length = 0;
	cout<<"The path is: "<<endl;
	for(int k = 0; k < visited->size(); k++){
	  cout<<(*visited)[i]->label<<endl;
	  length += (*visited)[i]->tentitave;
	}

	
      }
      else{
	double min = numeric_limits<double>::infinity();
	for(int i = 0; i < visited->size(); i++){
	  if((*visited)[i]->tentitave < min){
	    min = (*visited)[i]->tentitave;
	  }
	}
	double x = numeric_limits<double>::infinity();;
	if(min == x){
	  cout<<"No path has been found"<<endl;
	  


	  
	}
	else{
	  vertex* u = new vertex;
	  for(int i = 0; i < visited->size(); i++){
	    if((*vertices)[i]->tentitave == min){
	      u = (*vertices)[i];
	    }
	  }
	  dijkstra(start, end, vertices, u, visited, unvisited);

	}

      }
    }

  }




}
