#ifndef FS_LOCAL
#define FS_LOCAL

#include <filesystem>
#include <string>
#include "cliargs.h"

namespace fs_local {
	int list_tree(struct input_path& local_path, const unsigned long int& index_path);
}

#endif // FS_LOCAL
