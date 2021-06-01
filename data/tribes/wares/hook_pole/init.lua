push_textdomain("tribes")

dirname = path.dirname(__file__)

descriptions:new_ware_type {
   name = "hook_pole",
   -- TRANSLATORS: This is a ware name used in lists of wares
   descname = pgettext("ware", "Hook Pole"),
   icon = dirname .. "menu.png",

   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 9, 14 },
      },
   }
}

pop_textdomain()
