g_lua.bindSingletonFunction("g_map", "findPath", &Map::findPath, &g_map);
g_lua.bindClassMemberFunction<StaticText>("addMessage", &StaticText::addMessage);
g_lua.bindClassMemberFunction<StaticText>("addColoredMessage", &StaticText::addColoredMessage);
g_lua.bindClassMemberFunction<Creature>("getSpeed", &Creature::getSpeed);
g_lua.bindClassMemberFunction<Creature>("getBaseSpeed", &Creature::getBaseSpeed);
