#include "git2.h"

#include <stdio.h>

int main()
{
	if (git_libgit2_init() < 0) {
		fprintf(stderr, "Failed to initialize libgit2\n");
		return 1;
	}

	git_repository *repo = NULL;

	const char *path = "clone";

	int err = git_clone(&repo, "https://github.com/cgware/third-party", path, NULL);

	if (err != 0) {
		const git_error *err = git_error_last();
		fprintf(stderr, "Error %d: %s\n", err->klass, err->message);
	} else {
		fprintf(stdout, "Repository cloned successfully to %s\n", path);
	}

	git_repository_free(repo);
	git_libgit2_shutdown();
	return 0;
}
