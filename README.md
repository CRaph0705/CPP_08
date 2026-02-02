Template containers, iterators and algorithms in C++.


- vector <T>
	v.push_back(x);
	v.pop_back();
	v.size();
	v.empty();
	v.clear();
	v[i]; v.at(i);

for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    std::cout << *it << std::endl;


- list <T>
	l.push_back(x);
	l.push_front(x);
	l.pop_back();
	l.pop_front();
	l.insert(it, x);
	l.erase(it);
	l.size();

- dequeue <T>
	d.push_back(x);
	d.push_front(x);
	d.pop_back();
	d.pop_front();
	d[i];

- stack <T>
	s.push(x);
	s.pop();
	s.top();
	s.empty();
	s.size();

- queue <T>
	q.push(x);
	q.pop();
	q.front();
	q.back();
	q.empty();


- map <Key, Value>
	m[key] = value;
	m.insert(std::make_pair(k, v));
	m.find(key);
	m.erase(key);
	m.size();

for (std::map<int, std::string>::iterator it = m.begin(); it != m.end(); ++it)
    std::cout << it->first << " : " << it->second << std::endl;

- set <T>
	s.insert(x);
	s.find(x);
	s.erase(x);


- unordered_map / unordered_set

- iterator, const_iterator, reverse_iterator
	ex. :
	container.begin();
	container.end();
	container.rbegin();
	container.rend();


vector -> tableau
list -> chaîné
map -> clé-valeur trié
set -> valeurs uniques
stack / queue -> accès restreint