#include "git-compat-util.h"
#include "convert.h"
#include "environment.h"
#include "hex.h"
#include "object-name.h"
#include "tree.h"
#include "wrapper.h"
		blob = repo_read_object_file(r, oid, &type, size);
		abb = repo_find_unique_abbrev(the_repository,
					      &elem->parent[i].oid, abbrev);
	abb = repo_find_unique_abbrev(the_repository, &elem->oid, abbrev);